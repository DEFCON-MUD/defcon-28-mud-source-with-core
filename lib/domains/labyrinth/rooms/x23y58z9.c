inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 58, 9 }));
  set_short( "Passage - x23y58z9" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y58z9.c",
  "north" : DIR+"/rooms/x23y59z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
