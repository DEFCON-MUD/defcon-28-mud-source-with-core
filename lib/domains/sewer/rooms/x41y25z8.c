inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 25, 8 }));
  set_short( "Hallway - x41y25z8" );
set_objects( DIR+"/monsters/clubbouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y26z8.c",
  "south" : DIR+"/rooms/x41y24z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
