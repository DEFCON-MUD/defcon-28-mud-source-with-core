inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 58, 6 }));
  set_short( "Passage - x47y58z6" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y58z6.c",
  "east" : DIR+"/rooms/x48y58z6.c",
  "north" : DIR+"/rooms/x47y59z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
