inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 36, 9 }));
  set_short( "Corridor - x17y36z9" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y36z9.c",
  "north" : DIR+"/rooms/x17y37z9.c",
  "south" : DIR+"/rooms/x17y35z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
