inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 25, 9 }));
  set_short( "Passage - x23y25z9" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y26z9.c",
  "south" : DIR+"/rooms/x23y24z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
