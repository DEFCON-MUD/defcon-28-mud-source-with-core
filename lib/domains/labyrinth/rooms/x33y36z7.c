inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 36, 7 }));
  set_short( "Passage - x33y36z7" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y36z7.c",
  "south" : DIR+"/rooms/x33y35z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
