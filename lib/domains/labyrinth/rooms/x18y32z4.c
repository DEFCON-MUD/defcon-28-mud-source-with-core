inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 32, 4 }));
  set_short( "Corridor - x18y32z4" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y32z4.c",
  "east" : DIR+"/rooms/x19y32z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
