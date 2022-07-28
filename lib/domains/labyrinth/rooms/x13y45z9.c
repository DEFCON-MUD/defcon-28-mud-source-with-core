inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 45, 9 }));
  set_short( "Hallway - x13y45z9" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y46z9.c",
  "south" : DIR+"/rooms/x13y44z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
