inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 18, 8 }));
  set_short( "Hallway - x7y18z8" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y19z8.c",
  "south" : DIR+"/rooms/x7y17z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
