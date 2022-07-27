inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 46, 0 }));
  set_short( "Hallway - x15y46z0" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y46z0.c",
  "east" : DIR+"/rooms/x16y46z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
