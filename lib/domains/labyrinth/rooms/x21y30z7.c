inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 30, 7 }));
  set_short( "Hallway - x21y30z7" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y31z7.c",
  "south" : DIR+"/rooms/x21y29z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
