inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 35, 1 }));
  set_short( "Hallway - x37y35z1" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y36z1.c",
  "south" : DIR+"/rooms/x37y34z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
