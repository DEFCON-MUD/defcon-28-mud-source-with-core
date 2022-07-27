inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 26, 0 }));
  set_short( "Hallway - x19y26z0" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y27z0.c",
  "south" : DIR+"/rooms/x19y25z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
