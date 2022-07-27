inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 49, 0 }));
  set_short( "Hallway - x57y49z0" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y50z0.c",
  "south" : DIR+"/rooms/x57y48z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
