inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 8, 9 }));
  set_short( "Corridor - x9y8z9" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y8z9.c",
  "north" : DIR+"/rooms/x9y9z9.c",
  "south" : DIR+"/rooms/x9y7z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
