inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 62, 1 }));
  set_short( "Corridor - x43y62z1" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y62z1.c",
  "east" : DIR+"/rooms/x44y62z1.c",
  "south" : DIR+"/rooms/x43y61z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
