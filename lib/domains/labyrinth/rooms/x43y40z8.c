inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 40, 8 }));
  set_short( "Corridor - x43y40z8" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y41z8.c",
  "south" : DIR+"/rooms/x43y39z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
