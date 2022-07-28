inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 28, 5 }));
  set_short( "Hallway - x1y28z5" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y28z5.c",
  "south" : DIR+"/rooms/x1y27z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
