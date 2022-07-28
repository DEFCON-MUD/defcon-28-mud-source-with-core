inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 59, 2 }));
  set_short( "Corridor - x1y59z2" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y60z2.c",
  "south" : DIR+"/rooms/x1y58z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
