inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 40, 6 }));
  set_short( "Corridor - x39y40z6" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y40z6.c",
  "north" : DIR+"/rooms/x39y41z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
