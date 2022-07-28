inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 55, 0 }));
  set_short( "Corridor - x61y55z0" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y56z0.c",
  "south" : DIR+"/rooms/x61y54z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
