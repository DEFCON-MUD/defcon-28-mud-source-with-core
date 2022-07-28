inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 22, 2 }));
  set_short( "Corridor - x10y22z2" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y22z2.c",
  "east" : DIR+"/rooms/x11y22z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
