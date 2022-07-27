inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 46, 7 }));
  set_short( "Hallway - x45y46z7" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y46z7.c",
  "north" : DIR+"/rooms/x45y47z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
