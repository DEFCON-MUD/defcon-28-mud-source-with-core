inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 46, 0 }));
  set_short( "Corridor - x43y46z0" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y46z0.c",
  "east" : DIR+"/rooms/x44y46z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
