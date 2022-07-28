inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 42, 3 }));
  set_short( "Passage - x35y42z3" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y42z3.c",
  "north" : DIR+"/rooms/x35y43z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
