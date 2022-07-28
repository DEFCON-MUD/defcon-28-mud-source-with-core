inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 50, 7 }));
  set_short( "Corridor - x40y50z7" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y50z7.c",
  "east" : DIR+"/rooms/x41y50z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
