inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 44, 5 }));
  set_short( "Passage - x41y44z5" );
set_objects( DIR+"/monsters/josef.c");
 set_exits( ([
  "south" : DIR+"/rooms/x41y43z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
