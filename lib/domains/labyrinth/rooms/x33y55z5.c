inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 55, 5 }));
  set_short( "Corridor - x33y55z5" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y56z5.c",
  "south" : DIR+"/rooms/x33y54z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
