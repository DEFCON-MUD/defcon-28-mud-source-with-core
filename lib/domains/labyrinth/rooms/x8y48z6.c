inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 48, 6 }));
  set_short( "Corridor - x8y48z6" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y48z6.c",
  "east" : DIR+"/rooms/x9y48z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
