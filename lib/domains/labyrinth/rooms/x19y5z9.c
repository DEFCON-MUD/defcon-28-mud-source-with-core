inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 5, 9 }));
  set_short( "Corridor - x19y5z9" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y6z9.c",
  "south" : DIR+"/rooms/x19y4z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
