inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 55, 9 }));
  set_short( "Passage - x37y55z9" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y56z9.c",
  "south" : DIR+"/rooms/x37y54z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
