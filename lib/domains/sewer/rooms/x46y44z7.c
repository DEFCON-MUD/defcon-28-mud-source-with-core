inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 44, 7 }));
  set_short( "Passage - x46y44z7" );
set_objects( DIR+"/monsters/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y44z7.c",
  "east" : DIR+"/rooms/x47y44z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
