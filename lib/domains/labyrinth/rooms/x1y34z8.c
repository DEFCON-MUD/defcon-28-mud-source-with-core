inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 34, 8 }));
  set_short( "Hallway - x1y34z8" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y35z8.c",
  "south" : DIR+"/rooms/x1y33z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
