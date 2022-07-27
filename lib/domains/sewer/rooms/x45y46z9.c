inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 46, 9 }));
  set_short( "Corridor - x45y46z9" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y46z9.c",
  "east" : DIR+"/rooms/x46y46z9.c",
  "south" : DIR+"/rooms/x45y45z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
