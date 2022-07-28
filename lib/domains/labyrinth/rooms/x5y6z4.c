inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 6, 4 }));
  set_short( "Corridor - x5y6z4" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y7z4.c",
  "south" : DIR+"/rooms/x5y5z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
