inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 24, 9 }));
  set_short( "Passage - x27y24z9" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y24z9.c",
  "north" : DIR+"/rooms/x27y25z9.c",
  "south" : DIR+"/rooms/x27y23z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
