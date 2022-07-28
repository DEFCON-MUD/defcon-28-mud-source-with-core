inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 22, 6 }));
  set_short( "Corridor - x23y22z6" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y22z6.c",
  "north" : DIR+"/rooms/x23y23z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
