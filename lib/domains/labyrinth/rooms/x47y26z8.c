inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 26, 8 }));
  set_short( "Passage - x47y26z8" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y26z8.c",
  "north" : DIR+"/rooms/x47y27z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
