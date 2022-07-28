inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 6, 9 }));
  set_short( "Corridor - x27y6z9" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y6z9.c",
  "east" : DIR+"/rooms/x28y6z9.c",
  "north" : DIR+"/rooms/x27y7z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
