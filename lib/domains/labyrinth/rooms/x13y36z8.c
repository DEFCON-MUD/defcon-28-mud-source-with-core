inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 36, 8 }));
  set_short( "Corridor - x13y36z8" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y36z8.c",
  "east" : DIR+"/rooms/x14y36z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
