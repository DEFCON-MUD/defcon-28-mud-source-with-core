inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 44, 1 }));
  set_short( "Corridor - x49y44z1" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y44z1.c",
  "north" : DIR+"/rooms/x49y45z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
