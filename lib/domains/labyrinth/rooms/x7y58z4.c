inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 58, 4 }));
  set_short( "Corridor - x7y58z4" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y58z4.c",
  "north" : DIR+"/rooms/x7y59z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
