inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 52, 5 }));
  set_short( "Hallway - x5y52z5" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y53z5.c",
  "south" : DIR+"/rooms/x5y51z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
