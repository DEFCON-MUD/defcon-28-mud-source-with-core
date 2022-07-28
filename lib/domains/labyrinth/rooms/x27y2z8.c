inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 2, 8 }));
  set_short( "Hallway - x27y2z8" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y2z8.c",
  "east" : DIR+"/rooms/x28y2z8.c",
  "north" : DIR+"/rooms/x27y3z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
