inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 48, 8 }));
  set_short( "Corridor - x36y48z8" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y48z8.c",
  "east" : DIR+"/rooms/x37y48z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
