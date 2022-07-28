inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 38, 2 }));
  set_short( "Hallway - x52y38z2" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y38z2.c",
  "east" : DIR+"/rooms/x53y38z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
