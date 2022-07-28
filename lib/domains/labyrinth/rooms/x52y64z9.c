inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 64, 9 }));
  set_short( "Hallway - x52y64z9" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y64z9.c",
  "east" : DIR+"/rooms/x53y64z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
