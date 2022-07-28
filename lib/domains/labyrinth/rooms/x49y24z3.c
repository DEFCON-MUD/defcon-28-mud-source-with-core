inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 24, 3 }));
  set_short( "Passage - x49y24z3" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y24z3.c",
  "north" : DIR+"/rooms/x49y25z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
