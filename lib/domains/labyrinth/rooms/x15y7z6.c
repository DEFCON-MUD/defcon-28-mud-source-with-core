inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 7, 6 }));
  set_short( "Corridor - x15y7z6" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y8z6.c",
  "south" : DIR+"/rooms/x15y6z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
