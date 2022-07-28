inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 27, 0 }));
  set_short( "Hallway - x21y27z0" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y28z0.c",
  "south" : DIR+"/rooms/x21y26z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
