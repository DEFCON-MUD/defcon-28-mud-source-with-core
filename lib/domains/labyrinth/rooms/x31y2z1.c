inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 2, 1 }));
  set_short( "Hallway - x31y2z1" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y2z1.c",
  "east" : DIR+"/rooms/x32y2z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
