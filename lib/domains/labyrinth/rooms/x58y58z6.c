inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 58, 6 }));
  set_short( "Corridor - x58y58z6" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y58z6.c",
  "east" : DIR+"/rooms/x59y58z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
