inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 54, 8 }));
  set_short( "Corridor - x47y54z8" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y54z8.c",
  "south" : DIR+"/rooms/x47y53z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
