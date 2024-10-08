inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 48, 6 }));
  set_short( "Passage - x32y48z6" );
set_objects( DIR+"/monsters/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y48z6.c",
  "east" : DIR+"/rooms/x33y48z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
