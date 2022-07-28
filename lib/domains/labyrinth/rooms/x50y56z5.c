inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 56, 5 }));
  set_short( "Corridor - x50y56z5" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y56z5.c",
  "east" : DIR+"/rooms/x51y56z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
